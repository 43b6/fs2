// Room: /open/capital/room/medical
inherit ROOM;

void create ()
{
  set ("short", "����ҩ��");
  set ("long", @LONG
ҩ�����Ե�ǽ�ھ��������������, ���ݺ�ֳ������ٸ�С����,
ÿ��С�����϶���ʾ��һ�ֲ�ҩ��, ��ϸ����һ��, ����е�ҩ��֮��
��ֻ����������һ��������, ҩ��Ļ��æµ���߶���, ��æ�Ĳ��ɿ�
��, �ڽ�����һ��Сѧͯģ����С������������һ�Ѵ�����, ƴ���ĳ�
�Ż��蓁�硣

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"h06",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/Pwaiter" : 1,
]));
  set("light_up", 1);

  setup();
}
