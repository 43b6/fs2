// server.c

inherit NPC;

string home;

int query_prevent_shadow()
{
   return 1;
}

object compile_object(string file)
{
   string *all, tmp, filename;

   all = explode(file, "/");
   filename = all[sizeof(all)-1];
   all -= ({ all[sizeof(all)-1] });
   file = implode(all, "/");

   if( file_size(file+"/."+filename+".c") != -1 )
      return (object)call_other(file+"/."+filename, "v_create");
   if( file_size(file+"/_"+filename+".c") != -1 ) {
      return (object)call_other(file+"/_"+filename, "v_create");
   }

/*
      server = "d/" + name + "/virtual/" + tmp + "_server";
   if (file_size(server + ".c") != -1) {
      return (object)call_other(server,"compile_object",args);
   }
   server = VIRTUAL_SERVERS + tmp + "_server";
   if (file_size(server + ".c") != -1) {
      return (object)call_other(server,"compile_object",args);
   }
*/
   return 0;
}

void clean_up()
{
   destruct(this_object());
}

void create()
{
   seteuid(getuid(this_object()));
}
