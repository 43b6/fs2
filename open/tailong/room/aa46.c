inherit ROOM;

void create ()
{
  set ("short", "��԰");
  set ("long", @LONG
�������������еĻ�԰,���ﲻ�������˸�ʽ���������滨��,
����ֲ�˺ܶ��ϡ�в���,����"�������¡�����������ʮ��ѧʿ"
,����Ҳ����Ϊ����Ĳ軨��������,���Աߺ�����һ������,��
ȥ�����ɡ�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "southeast" : __DIR__"aa49",
  "south" : __DIR__"aa47",
  "east" : __DIR__"aa45",
]));

  setup();
  replace_program(ROOM);
}
