string dateTimeString()
{
//return a string with the date and time
  time_t rawtime;

  time (&rawtime);;

  return ctime(&rawtime);
}