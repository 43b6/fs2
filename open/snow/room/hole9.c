// Room: /open/snow/room/hole9.c

inherit ROOM;

void create()
{
	set("short", "��Ѩ");
	set("long", @LONG
����һ��ƽ���Ķ�Ѩ, �Ӷ�Ѩ���ͱ���������������
Ȫˮ, �ƺ���ѩ��ɽ��ѩ�ڻ�����������, ����ˮ�峺��
��, ʹ���볢��������ζ��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"hole6",
]));

  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

	setup();
}
