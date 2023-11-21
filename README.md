# Pioneer 2 Robot Control System Implementation

## Objective

Your primary goal is to implement a control system for a "chocachoca" type robot. This task involves utilizing a simulated environment in Webots, featuring a "Pioneer 2" robot. The robot is equipped with a DistanceSensor and two Motors, providing the necessary hardware capabilities for effective control and navigation.

## Webots Environment

The Webots world you will be working in is specifically designed for this project. It includes the "Pioneer 2" robot model, which is a versatile platform suitable for various robotic experiments and applications.

### Key Components

1. **DistanceSensor**: Essential for obstacle detection and avoidance.
2. **Motors**: Responsible for the robot's locomotion, allowing it to move and turn within the simulated environment.

## Experimentation and Testing

You are encouraged to experiment with different control strategies by implementing various controllers. These controllers will determine how the robot reacts to its environment, based on the input from its DistanceSensor and the control of its Motors.

### Implementing a Controller in Webots

To assign a controller to the "Pioneer 2" robot in Webots, follow these steps:

1. **Open the World File**: Launch Webots and open the world file containing the "Pioneer 2" robot.
2. **Select the Robot**: In the scene tree, click on the "Pioneer 2" robot to select it.
3. **Assign the Controller**: In the robot's properties panel, find the 'controller' field. Click on this field and choose the desired controller from the drop-down list. This list contains all the controllers available in your Webots project.
4. **Save the Configuration**: After selecting the controller, save your world file to ensure that the changes are applied.

## Guides

[Controller Programming](https://cyberbotics.com/doc/guide/controller-programming?tab-language=c++)
