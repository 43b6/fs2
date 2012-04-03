// Room: /open/capital/room/D04.c
#include </open/capital/capital.h>
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�ʹ�����");
  set ("long", @LONG
�����ǻʹ������, ����ɭ��, ���յĹ��ź͸ߴ�Ĺ�ǽ͸��һ��
��͢���������, �ʹ����һ�ж������ܵ��ػ��š��ſ�վ����λ����
�Ľ�����, ������ݵ�����, ����һ�ߵ����, ��о�������������
������������
    ��·���п��ʾ��(board).

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
            ���ʳ��صأ������˵������ڴ˶�������
            ����Ʒ���ߵĹ�Ա���⣬�����ô��˵���
              �������ɱ���⡣��
                ��Ʒ��ǰ���������ӳ�������
",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/doorsoldier" : 2,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"king/kr7-4",
  "south" : __DIR__"r08.c",
]));

  setup();
}
int valid_leave(object who,string dir){
  if(dir=="north" && present("soldier",environment(who)))
  if((dir=="north" && !wizardp(who))||(dir=="north" && who->query("class")!="officer") && who->query_temp("can_in")!=1)
  return notify_fail("�ʹ����������Ķ���˵:���ڽ��أ������˵Ȳ��ý��롣\n");
return :: valid_leave(who,dir);
}
void init()
{
        add_action("do_exert","exert");
}
int do_exert(string str)
{
 object me;
 me=this_player();
 if(str=="roar"){
 message_vision(HIC"�ʹ����������Ķ���˵:�ʳǽ�������������������������!!!\n"NOR,me);
 return 1;
                }
 else
 {
 return 0;
 }
}
