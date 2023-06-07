# UnixTime
A simple library for arduino to create Unix Time 

How to use?
Simple :
```c++
 UnixTime unix_class;
 
 //....
 
void setup()
{
  uint32_t Unixed_Time = unix_class.unixtime( year , month , dayOfMonth , hour , minute , second));
}
```
