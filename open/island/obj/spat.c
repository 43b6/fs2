inherit ITEM;
// by airke
#include <ansi.h>
#include <mudlib.h>
#include <command.h>

void create()
{
  set_name(HIY"С�ƽ����"HIC"(������˯��)"NOR,({"gold-dragon"}));

  set("long","drop it\n");

  setup();
}
 

void init() {

add_action("do_drop","drop");

return;
}

 
int do_drop(string str)
{
   object room,mob; 
   string name;
  
   if(!str||sscanf(str, "%s",name)!=1)
          return 0;
   if(name != "gold-dragon")
          return 0;
message_vision (HIC"$N����ؽ��ƽ������������
С�������������˫�����˹���\n"NOR,this_player());
   room = environment(this_player());
   mob = new("/open/island/obj/pat");
   mob->move(room);
   mob->do_follow(this_player());
   command("ssmile "+this_player()->query("id"));
   destruct(this_object());
 return 1;

}  


