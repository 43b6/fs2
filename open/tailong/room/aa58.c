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

  set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"aa55",
  "northwest" : __DIR__"aa57",
]));

  setup();
  replace_program(ROOM);
}
