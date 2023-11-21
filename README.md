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
You have a few controllers implemented in this project to take a look.

In order to do this you need to know:

### Steps to Open a World in Webots

1. **Launch Webots**: Start the Webots application on your computer.
2. **Select 'Open World'**: From the 'File' menu at the top, select 'Open World'.
3. **Navigate to the World File**: Browse to the location of the world file you want to open. World files typically have the extension `.wbt`.
4. **Open the File**: Select the file and click 'Open'. The selected world will now load in Webots, ready for simulation and interaction.

Now that you know how to open a world in Webots, you can proceed to the main objective of implementing the robot control system.

### Implementing a Controller in Webots

To assign a controller to the "Pioneer 2" robot in Webots, follow these steps:

1. **Open the World File**: Launch Webots and open the world file containing the "Pioneer 2" robot.
2. **Select the Robot**: In the scene tree, click on the "Pioneer 2" robot to select it.
3. **Assign the Controller**: In the robot's properties panel, find the 'controller' field. Click on this field and choose the desired controller from the drop-down list. This list contains all the controllers available in your Webots project.
4. **Save the Configuration**: After selecting the controller, save your world file to ensure that the changes are applied.

You can use the non-implemented `bumper_controller.cpp` to write your own control system.

Have fun!

## Guides

### Understanding Webots

1. [Introduction to Webots](https://cyberbotics.com/doc/guide/introduction-to-webots?tab-language=c++)

2. [The User Interface](https://cyberbotics.com/doc/guide/the-user-interface?tab-language=c++#the-user-interface)

3. [The 3D Window](https://cyberbotics.com/doc/guide/the-3d-window?tab-language=c++)

4. [The Scene Tree](https://cyberbotics.com/doc/guide/the-scene-tree?tab-language=c++)

5. [The Console](https://cyberbotics.com/doc/guide/the-console?tab-language=c++)


And when you finally feel safe...

6. [Controller Programming](https://cyberbotics.com/doc/guide/controller-programming?tab-language=c++)
