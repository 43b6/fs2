#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", HIB+"������"+NOR);
  set ("long", @LONG
�����Ǻ������������ ,ɭɭ�ĺ����·�Ҫ�̽���ͷ��ȥ
�Ƶ� ,���������һ��һ�ε���ʧ ,��ǰ�и���޴�ʯ����
���� ,ԭ���Ǿ޴��ޱȵ��ڹ�....


LONG);
 set("exits", ([ /* sizeof() == 4 */
  "southwest" : "/open/island/room/c1",
    "southeast" : "/open/island/room/c3",
  "east" : "/open/island/room/c2",
]));
set("objects", ([ /* sizeof() == 1 */
  "/open/island/npc/turtle" : 1,
]));


 
 set("light_up", 1);
 
 setup();
}
void init()
{
  object ob;
  if( interactive( ob= this_player()))
   {
        // 5������
        call_out("greeting", 2, ob);
   }
  add_action("do_team","team");

}

int greeting (object who)
{
  object room=environment(who);
//  �ж�player�Ƿ����������
  if(this_object() == room )
 who->add("kee",-70);
return 1;
}

int do_team(){
   object me=this_player();
   tell_object(me, "���ֽű���Ĳ���ʹ��!!\n");
   return 1;
}

