//by chilice casey
#include <ansi.h>
inherit ROOM;

void create ()
{
   set  ("short", HIR"��ɽ��"NOR);
  set ("long", @LONG
һ����������Ϯ�������ܵĸ������˿ڸ�����
�ķ����ѣ������ڻ�ɽ�У���һ�������˪����֮
�أ���Ψһ��·�����ɴ����롣

LONG);

  set("exits", ([ /* sizeof() == 2 */
"jump"  : __DIR__"c23",
"west"  : __DIR__"m2",
]));
   set("outdoors", "/open/main");


  set("light_up", 1);

 
  setup();
}
int valid_leave(object me, string dir)
{
if( dir=="jump" && (int)me->query("combat_exp") < 400000 ) {
write(HIR"����ܲ��˻�ɽ�ڵĸ��¶����˻��� !!\n"NOR);
write(RANK_D->query_respect(me)+"�������������������Ծ���ɽ��!\n");
        return 0;
}
return 1;
return ::valid_leave(me,dir);
}



