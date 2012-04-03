// Room: /d/death/road2.c
 
inherit ROOM;
 
void create ()
{
  set ("short", "���Ŵ��");
  set ("long", @LONG
������һ����ɭɭ��·��, ŨŨ���������������, ������
Զ������ɢȥ�Ƶ�. ����·ǰ��ֻ�������ǵļ�յ����........
 
LONG);
  set("no_auc",1);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"road1",
]));
  set("light_up", 1);
  set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);
  set("objects", ([
    "/open/death/npc/king.c" : 1,
  ]));
  setup();
}
int valid_leave(object me, string dir)
{
        int i;
        if (dir == "north") {
                i = (int)me->query_temp("long_road");
                i = i + 1;
                if (i == 3) {
                me->delete_temp("long_road");
                return 1;
                }
                else {
                        me->set_temp("long_road",i);
                        return notify_fail("����������..... �������ܾ�ɫ��Ȼ��û�б�....\n");
                }
        }
        else {
        if (dir == "south") {
                me->delete_temp("long_road");
                return 1;
                }
        return 1;
        }
}
