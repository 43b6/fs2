/*
  TMI virtual object server 
  original by Whiplash@TMI  
  sscanf code generalized by Truilkan@TMI - 92/04/29
*/

#define VSERVER "/adm/daemons/virtual/server"

nomask object compile_object(string file)
{
   string name, server;

   if (sscanf(file, "u/%*s/%s/%*s",name))
      server = user_path(name) + "virtual/server";
   if (file_size(server + ".c") == -1)
      server = VSERVER;
   return (object)call_other(server,"compile_object",file);
}

void clean_up()
{
   destruct(this_object());
}

void create() 
{
   seteuid(getuid());
}
