// Room: /u/s/sueplan/newplan/area/room2
inherit ROOM;

void create ()
{
  set ("short", "[1;37m���[1;33m��[0m");
  set ("long", @LONG
������������������ס������ɽ����ɽ���Ԫʼ����ѧϰ�ɵ���
���������ǻۡ�����δ����ǰ��������һ��Ӣ�ۡ����ܡ���ʦ���ͷ�
����ȫһ�������е�����һֱ���Ż��Ų�����������Ĳ��ң�����˵
�ܵ�����ż��Ӱ�졣��Ϊ����һλ������С���飬����һ���ӳ�ƶ��
ϴ�����ǵ������꣬�����˴�ͬ����飬���߸��˵�·�����Ǹ�ʱ����
�����вſ�ʼ���˺��ˡ���ÿ��һ���ں��ߴ�����ż����������������
���ܣ����ܹ���ʦ������һ�򰮹���������������Ҳ��Ȼ������������
��ǿ����������Ϊ�����ǻ۹��ˣ�����Ԥ��δ������Ӧ���ڣ���������
������Ϊ���յľ�ʦ��                                                   �����ư������Ժ󣬽����ܷ�Ϊ���������������������
�ˣ�������걻̫�׽���Я����磬��ס������ǡ��Ӵˣ�������ƹ�
��ޱ�����еġ��ǻۡ��� 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/room/newplan/npc/scholar_kao.c" : 1,
]));
  set("light_up", 1);
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"room3.c",
  "south" : __DIR__"room1.c",
]));

  setup();
}
int valid_leave(object me, string dir)
{
  if(dir=="enter"&&present("scholar",environment(me)))
    {
    return notify_fail("�㷢�����˵�������, �������!!!\n");
     }
  return 1;
}
