#include "robot_simulator.h"
#include <string.h>

robot_status_t robot_create(robot_direction_t direction, int x, int y) {
  robot_status_t robot;
  robot.direction = direction;
  robot.position = (robot_position_t){x, y};
  return robot;
}

void robot_move(robot_status_t *robot, const char *commands) {

  int length = strlen(commands);

  for (int i = 0; i < length; i++) {
    if (commands[i] == 'L') {
      robot->direction = (robot->direction - 1) % 4;
    } else if (commands[i] == 'R') {
      robot->direction = (robot->direction + 1) % 4;
    } else if (commands[i] == 'A') {
      if (robot->direction == DIRECTION_NORTH) {
        robot->position.y = robot->position.y + 1;
      }
      if (robot->direction == DIRECTION_SOUTH) {
        robot->position.y = robot->position.y - 1;
      }
      if (robot->direction == DIRECTION_WEST) {
        robot->position.x = robot->position.x - 1;
      }
      if (robot->direction == DIRECTION_EAST) {
        robot->position.x = robot->position.x + 1;
      }
    }
  }
}
