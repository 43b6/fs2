//tesinroom
#include <ansi.h>
inherit ROOM;

void create()
{
        set("short", HIY"���ľ�"NOR);
        set("long", @LONG
��������..һ��ŨŨ�ĳ���..��������һ��...���ڼ򵥵İ���..��������
������Ȼ�ĸо�...������..һ�������ٵ�ǰ������Ŀ��˼..�ѵ������Ǵ�˵
�еĴ�ʦ--�������ġ�?
LONG );
        set("exits", ([ /* sizeof() == 3 */
      "out":"/open/gsword/room2/tesinroad2.c",
 ]));
        set("light_up",1);
        set("no_transmit", 1);
        set("objects",([
        "/open/gsword/npc2/tesin.c":1,
  ]));
        setup();
}
void init()
{
  object ob;
  if( interactive( ob= this_player()))
   {
      remove_call_out("greeting");
        call_out("greeting", 0, ob);
   }
}

int greeting (object who)
{
 who->set("quests/shasword",6);
 if (who->query_temp("find_tesin8")==1)
 {
 who->set("quests/sblood",1);
 who->delete_temp("find_tesin8",);
 }
 else if (who->query_temp("find_tesin8")==2)
 {
 who->set("quests/sblood",2);
 who->delete_temp("find_tesin8",);
 }
 else  if (who->query_temp("find_tesin8")==3)
 {
 who->set("quests/2blood",3);
 who->delete_temp("find_tesin8",);
 }
}
