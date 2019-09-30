// ava didn't killed the process 
// jest did kill the process but didn't show the window 
// jasmine , with some hacks did exit the event loop correctly, and rendered the window too. 
// apps needs to be run with testUtil.executeApp()
// also we needed to kill the process in order to render expect errors correctly. 
// so this program will execute each spec, serially, 