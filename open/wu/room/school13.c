// Room: /u/d/devils/school10.c

inherit ROOM;

void create()
{
	set("short", "�ؾ���");
	set("long", @LONG
������������鷿,����ų���ǧ��,��������ĵ��Ӱ���ȡ��Ϊ�ؾ���
���Ĺ�����ƨ,��ʵ��,����Ҳֻ�ǲ����,��Ϊ������һ��Ҳ�ѵý��鷿����
,�����������!ǽ����һ������(couples),��������������ģ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"school8",
]));
	set("valid_startroom", "1");

	setup();
}
