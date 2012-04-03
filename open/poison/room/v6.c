// Room: /open/poison/room/v6.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һ����ש���ɵ����ᣬ�����������ཬ����ֻ�Ǵ�����ཬ��
����������һЩ��֪���˻������޹�죬�������˶��Ĳ��ѡ�
�������˸�ʽ��������ֻ��������������ĸ��С��ÿһ
ֻ����������������������Ϣ���м�ֻ������ĵ�����̧��ͷ��
������������������û��ʳ����ֵ���ͷ˯��ȥ�ˡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"v2-8.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 3 */
   "/open/poison/npc/pig3.c" : 2,
  "/open/poison/npc/pig2.c" : 1,
   "/open/poison/npc/pig1.c" : 1,
]));

  setup();
}
