// Room: /open/gsword/room/wghouse1.c
inherit ROOM;

void create ()
{
  set ("short", "�ؾ���");
  set ("long", @LONG
�����ɽ������Ե����ѧ����֮������˵ֻ�о��������˵���ɣ���
�ɵ��˷����书���ţ���˵��ϻ���һ����Ļҳ������������������
Զ��Ҳ�ǲ��Ʋ�ȫ������ߵ�һ�ǣ���һ���ر��Ͼɵ����(shelf)��
 
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/g5-11.c",
]));
  set("objects",([
"/open/gsword/npc/bookkeeper" :1 ]));

  set("light_up", 1);
  set("item_desc",([
 "shelf": "һ���Ͼɵ���� ,�ϱ߰�\���������Ʋ�ȫ���鼮 ,����д�š��ɽ����š�������\n"
  ]));
  setup();
}
