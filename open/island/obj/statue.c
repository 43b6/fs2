 inherit ITEM;
// by airke
#include <ansi.h>
#include <mudlib.h>
#include <command.h>

void create()
{
  
  set_name(HIG"Q�����ľ��"NOR,({"statue"}));
  set("long","pat it\n");
  set("unit","ֻ");  

  setup();
}

void init() {

add_action("do_pat","pat");

return;
}

int do_pat(string str) {
 
 
  object room,me,mob;
  string name;

  if(!str||sscanf(str, "%s",name)!=1)
          return 0;
  if(name != "statue")
          return 0;
  me=this_player();
  message_vision (HIC"$N���ĵ����ͷ����������һֻ�ɰ��Ļƽ�С������\n"NOR,this_player());
   
  room=environment(me);
  mob = new("/open/island/obj/pat.c");
  mob->move(room);
  mob->do_follow(me);
 destruct(this_object());
  return 1;
}


int query_autoload()
{
  
    return 1;
}




