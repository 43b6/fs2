// Room: /u/s/sueplan/newplan/area/room10
inherit ROOM;

void create ()
{
  set ("short", "[1;37m����[1;33m��[0m");
  set ("long", @LONG
    ��������������ҳ���������һλ��̫ʦ��ȴ�ǲ��ܱ�������
���ڡ���̫ʦ����Ϊ���࣬���ҹ�������Ժ������̫ʦ��������ȫ����
�������Ҽ��δ�Ԫ˧��
    ������̫ʦ���������һ�����ս�У����ܾ�����������ս����
̫�׽��Ǹж��������¾��񣬾����굽��磬������ס�����ǡ�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/room/newplan/npc/scholar_houng.c" : 1,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room9.c",
  "����" : __DIR__"jroom.c",
]));

  setup();
}
int valid_leave(object me, string dir)
{
  if(dir=="����"&&present("scholar",environment(me)))
  {
  return notify_fail("�㷢�����˵�������, �������!!!\n");
  }
  return 1;
}
