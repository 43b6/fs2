// Room: /open/gsword/room/eghouse2.c
inherit ROOM;

void create ()
{
  set ("short", "�޾�");
  set ("long", @LONG
���ǽ����½��ǵ��޾ӣ����ڸհ������£���ֵ�λ�ϵͣ������
�޾�Ҳ����ļ�ª��һ�ż����Ĵ�ͨ�̣����ſ������Σ�������
�ӵ�ȫ����

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/gsword/room/g3-8.c",
]));
  set("objects",([
     "/open/gsword/npc/boy-2":2,
      ]));

  setup();
}
