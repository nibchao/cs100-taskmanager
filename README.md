[![CI](https://github.com/cs100/final-project-nchao006-etapi017-dgroz002-jgonz503/actions/workflows/main.yml/badge.svg)](https://github.com/cs100/final-project-nchao006-etapi017-dgroz002-jgonz503/actions/workflows/main.yml)
# Task Manager
 
 > Authors: [Nicholas Chao](https://github.com/nibchao), [Jorge Gonzalez Quiroz](https://github.com/JorgeNova-1), [Denitca Grozeva](https://github.com/DeniGroz), [Edgar Tapia](https://github.com/Etapi017)

## Project Description
 > * We will be using the Linux terminal along with GitHub. This includes the tools and resources in them. 
 > * The language we will use is C++.
 > * The project we chose to do is a task manager. We chose this project because it was the most useful out of the given project options and could see use outside of this class to increase our productivity.
 > * The input of this project is the user being able to create and edit a task. The output of the project should be a list of all the tasks the user created along with the relevant information for each task.
 >   * The tasks will have the following customizable options: title, description, classification, priority, duration and due date. Priority, duration, and due date are task specific fields and each task type has one of these fields.
 
 ## UML Class Diagram
![Alt text](https://github.com/cs100/final-project-nchao006-etapi017-dgroz002-jgonz503/blob/master/cs100%20final%20project%20UML%20diagram.png?raw=true)
- If the preview for the UML diagram is broken, the repository has the UML diagram saved in UML_Diagram.pdf

- This is our UML diagram for what we think we'll create to make the Task Manager. 
- The main class creates a main menu that prompts the user for various inputs and should be used to display the created tasks. The TaskList class handles all TaskList specific operations and the generalTask class handles all Task specific operations which includes the three classes that inherit from it to create each type of task classification. The PrintTask class handles the printing of each task classification which should display the information in each task.
 
 ## Design Patterns
 > The design pattern we plan to use and implement is the strategy design pattern. 
 > * We decided on using this design pattern because it helped us break down the code that we planned to implement for this Task Manager project. The strategy design pattern allows us to split a general task that contains many shared functions into three classifications based on what was given in the project prompt. We can then make each of these tasks unique in their own classes and make them fit as necessary. It also allows us to split up the TaskList class into smaller individual Tasks which helps to break down the specific code for TaskList/Task into their own classes. Both of these should help us to write better code because we will not be repeating the same functions over and over in each type of task classification and will not be coding everything inside just a single Task or TaskList class. The strategy design pattern also let us make each task have a unique print task output.

 ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
