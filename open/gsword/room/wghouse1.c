// Room: /open/gsword/room/wghouse1.c
inherit ROOM;

void create()
{
  set ("short", "�ؾ���");
  set ("long", @LONG
�����ɽ������Ե����ѧ����֮������˵ֻ�о��������˵���ɣ�
�ſɵ��˷����书���ţ���˵��ϻ���һ����Ļҳ�������������
�����Զ��Ҳ�ǲ��Ʋ�ȫ��
LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wghouse",
]) );

  setup();
}
