// Room: /open/main/room/M19.c

inherit ROOM;

void create ()
{
  set ("short", "����ɽ");
  set ("long", @LONG
��������½����ɽɽ����һ֧����ɽ������ǧ���ɲ--������
�����ڱ��ߵ�ɽͷ�ϣ������ֽ�����ɽ�������ԶԶ�����ߵ�ɽͷ����
ȥ������Է�������ԼԼ����һ��ɽ�ţ�������Ϊ̫Զ�˿�����������
����д��Щʲô����������룬Ӧ���������������ɡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/main/room/M20",
  "northup" : "/open/main/room/M15",
]));

  setup();
}
