// Room: /open/gsword/room/g4-4.c
inherit ROOM;

void create ()
{
  set ("short", "��¥��¥");
  set ("long", @LONG
���ϵ��˶�¥��һ����ͭ���ӹ��������룬����һ����ľ׮��������
��ȥ���ɽ������۵ף��ɽ���Ȼ����ʮ�����ʷ��ȴ�����߹�ģ���㿴��
��������Զ���и�������ȴ�Ǵ�δȥ������֪�Ƿ������ɽ���
 
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "down" : "/open/gsword/room/g4-4.c",
]));

  set("objects", ([ /* sizeof() == 1 */
   "/open/gsword/npc/trainee-2":1,
]));

  set("light_up", 1);

  setup();
}
