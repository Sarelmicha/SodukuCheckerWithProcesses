/*
 * Main.h
 *
 *  Created on: 3 May 2019
 *      Author: mor
 */

#ifndef MAIN_H_
#define MAIN_H_

void createPipe(int* pfd);
void childNavigation(int pfdWrite, int pfdRead, const char* task);
void gettingSodukuFromUser(int* answer1, int* answer2, int* answer3);
void gettingSodukuFromFiles(char* argv[],int* answer1, int* answer2, int* answer3);
void readSodukuFromFile(char* fileName, int* soduku);
void sendOneSodukuToChild(int* soduku, int pfdWrite, int pfdRead);
void sendSodukusToChildren(int argc, char* argv[]);
void sendSodukusToChildrenHelper(int* soduku, int* answer1, int* answer2,int* answer3);
void signalNoSoduku(int pfdWrite, int pfdRead);
void insertNumberToSoduku(int* soduku);

#endif /* MAIN_H_ */
