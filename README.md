# Software Engineering Lab - Homework

This is the homework repository where you will contribute all your homework submissions to. You will receive all new homework tasks as issues in this GitLab Project.

The main sections of this file are:

1. [Environment Setup](#environment-setup)
1. [Development Environment](#development-environment)
1. [Homework Submission](#homework-submission)

## Environment Setup

To get started with the environment setup follow the instructions for your OS. Our recommendation is to use Linux with [Ubuntu](https://ubuntu.com/download/desktop).

### Ubuntu

Open a terminal and run the following commands:

```shell
# Install git
sudo apt install git

# Clone the repository (find the full url when you login to gitlab)
git clone https://gitlab.lrz.de/...

# Install the dependencies
cd <repository>
./install.sh
```

### Windows

Our recommendation for Windows is to use the Windows Subsystem Linux 2 (WSL2). This enables you to have a Linux system inside of your Windows. Follow the Microsoft docs on [how to setup WSL2](https://docs.microsoft.com/en-us/windows/wsl/install-win10#manual-installation-steps).

Once you finished the WSL2 setup you need to install a Linux version of your choice. We recommend to use [Ubuntu](https://ubuntu.com/wsl).

One you have your Linux running in WSL2, follow instructions of the [Ubuntu](#ubuntu) setup. You should work in the Ubuntu home directory. When you start the WSL terminal you can get there by typing `cd`. Now you should see that the path shown in the terminal starts with a `~`.

### OSX

* Install Xcode (from the [AppStore](https://apps.apple.com/de/app/xcode/id497799835?mt=12)) and the command line tools (`xcode-select --install`)
* Install [homebrew](https://brew.sh/)

Open a terminal and run the following commands

```shell
brew install cmake git clang-format lcov
```

### Docker

We have a docker environment with all dependencies included. This requires a [docker installation](https://docs.docker.com/get-docker/) on your machine. After the installation you can add your user to the docker group to avoid running docker as `sudo` user as shown in the [post installation steps](https://docs.docker.com/engine/install/linux-postinstall/).

#### VS Code Dev Containers

Developing inside a docker container is easy in [Visual Studio Code](#vs-code):

1. Ensure that Docker is installed and running on your machine
1. Open this folder in VS Code
1. Install the [Remote Development](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.vscode-remote-extensionpack) extension
1. Open the command palette (`F1` on Windows, `Shift+Ctrl+P` on Linux)
1. Call `Remote-Containers: Reopen in Container`

#### Using Docker from the command line

```shell
# Pull the container once
docker pull makeappdev/cpp-dev
```

Now you can launch the docker container. If you want to use our docker compose config for launching the environment you further need to have the [docker compose](https://docs.docker.com/compose/cli-command/) plugin installed.

```shell
# Launch the docker environment with docker run
docker run --rm -it -v REPO_PATH:/home -w /home makeappdev/cpp-dev bash

# Launch the docker environment with docker compose
docker compose run dev
```

Both commands above have the same result. Inside the docker you will find the code in `/home` which should be the default working directory when starting the container.

## Development Environment

We recommend to use code editors or IDEs such as [Visual Studio Code](https://code.visualstudio.com/) or [CLion](https://www.jetbrains.com/clion/). In the following section we describe how to install and setup the projects with those.

### VS Code

VS Code is an open source code editor developed by Microsoft and the community.

* [Download](https://code.visualstudio.com/) and install VS Code

To benefit from its features during this course you should install the following extension. This can be done directly from the editor. If you use the [VS Code Dev Containers](#vs-code-dev-containers), the plugin are installed automatically.

* [C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
* [CMake](https://marketplace.visualstudio.com/items?itemName=twxs.cmake)
* [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools)

Within WSL you can open projects with VS Code by navigating to the project folder in the terminal and open it with `code .`.

### CLion

CLion is a commercial IDE developed by Jetbrains. You can download a free 30 days trial version. To freely access the full version, you need to register a Jetbrains account with you TUM mail address. With this account you are able to use all available Jetbrains tools and IDEs (>10) for free.

* [Download](https://www.jetbrains.com/clion/) and install CLion

CLion also provides a rich set of additional plugins. For this project all we need is already included in the default installation.

If you want to open the project in the WSL with CLion for the [CLion WSL instructions](https://www.jetbrains.com/help/clion/how-to-use-wsl-development-environment-in-product.html).

## Homework Submission

You will receive the individual tasks for every homework as GitLab issues in this project. In the following we explain some details on how to work on and submit your homework. The workflows used for the homework assignments are common and well established workflows for collaborative software development.

### What will be graded

We will use the latest commit on the `master` branch of this repository that is available at the deadline as your homework submission.

### How to add code to the master branch

You cannot directly push your changes to the `master` branch. This is motivated by common guidelines for how to work with version control and allows you to double check your code before the submission. To be precise, this workflow is known as [Git Feature Branch Workflow](https://www.atlassian.com/git/tutorials/comparing-workflows/feature-branch-workflow).

As you cannot directly push to `master` you have to push your commits on [branches](#how-to-create-branches) and merge your changes on the GitLab website via [Merge Requests](https://docs.gitlab.com/ee/user/project/merge_requests/creating_merge_requests.html). When you create a merge request you can see all your changes in a nice summary and can discuss them with your team member and review/suggest changes.

### How to create branches

You can find great references on how to create branches and more at [try.github.io](https://try.github.io/). On the [Learn Git branching](https://learngitbranching.js.org/) page you can find great interactive tutorials to learn `git` online. Alternatively, you can download the game [Oh my Git!](https://ohmygit.org/) which is another great learning resource for `git`. The main steps to create a new branch with `git` from the command line are as follows:

```shell
# Inside your repository
# Create a new branch
git checkout -b my_branch

# Do your implementation
# Commit your changes (can be more than one commit)

# push your branch
git push origin my_branch
```

Now your branch is available on the GitLab website and you are able to create a merge request.

### Best Practices

To help yourself and your team, a clear separation and referencing of your contributions is recommended. We list a few recommendations and best practices below:

#### Expressive commit messages

Expressive commit messages help yourself and your team in the review process and at any situation related to the history such as identifying the change that added a certain feature or introduced a specific bug. See the examples below for good and bad cases:

```shell
|
* Update README.md
|
* Add test
|
* Update angle.cpp
```

```shell
|
* Docs: add git to project dependencies
|
* Point: add tests for distance calculation
|
* Angle: add creation from 2 points
```

#### At most one task per merge request

Small merge request are easier to review and will be merged faster. This means you team members can already benefit from your contributions. Therefore, we recommend splitting a single homework into multiple merge request. One merge request should at most contain the changes for one task. On the other side it is totally fine to have multiple merge request for one task if it is a very large tasks. With this even multiple developers can work on different parts of the same task.

#### Referencing merge requests with issues

When submitting a merge request you can reference the issue it belongs to with `#` followed by the issue number. You can even automatically close an issue after merging, when you write `closes #` in the merge request description.

#### Updating the issues

Issues are a good way to track the progress for you development. If you finished a task, you should also close the corresponding issue to show you team members that this tasks is completed. In case you have some problems you can use it for discussing solutions with your team.
