// Room: /u/d/dhk/questsfan/room21
inherit ROOM;

void create ()
{
  set ("short", "�׾���");
  set ("long", @LONG
��һ��λ�ڹ�Ե�Ľᾧ���������ɫ�Ĺ�â�����Թ�
��˼����һ��Ľᾧ�У��׾�ʯ �壬������ɫ�����ɫ��
��ʱ����ð�����ɫ��Һ�壬������������ЩҺ��һ�ھ�
��ʹ��Ƥ��ѩ�ס����ϻ�ͯ����һ·�ۿ�����;һ����
ʽ��ɫ�ľ�ʯ������е��������ɾ��еĸо����ۻ�����
�������ü��������ơ���Ķ���ƸС�

LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"room22",
  "northup" : __DIR__"room20",
]));

  setup();
}
