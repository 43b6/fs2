// Room: /u/s/sueplan/newplan/area/room6
inherit ROOM;

void create ()
{
  set ("short", "[1;37m����[1;33m��[0m");
  set ("long", @LONG
������������Χȫ���Ǿ��Ұ�����־ʿ������Ҳ���ᵼ���󳱵���
����Ҳ����˵�������鳼���������˺����ġ�������һ���з��ٵĴ�
�鳼���ܺ��˲��ٳ��ڵ�����ҳ���ʿ�����������ר��Ȩ�ơ�
    �������󣬷��ٱ��������������зǳ�������ַ��˵���������
����ն�׷��١�̫�׽���֪���������㣬���ٷ��ٵ����ȥס����
�ǣ���Ϊа��֮��ר�ܡ�������������ڻ������е���ν��ħ���� 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/room/newplan/npc/scholar_yea.c" : 1,
]));
  set("light_up", 1);
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"room7.c",
  "south" : __DIR__"room5.c",
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
