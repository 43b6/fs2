inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
������������Ժ�ͱ�Ժ�Ļ���,���������еĻ��ȶ��������ĵ���
��,�ر��ؿ�,�����Ա߰���һЩ������ľ,���ó�Ϊһ���������ĺ�
�ط���
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"aa28",
  "south" : __DIR__"aa19",
]));
}
