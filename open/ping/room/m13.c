// Room: /open/ping/room/m13.c ~night~(С��)

inherit ROOM;

void create ()
{
  set ("short", "����ɭ����");
  set ("long", @LONG

�����ò����׾����˷���ɭ��,�����������һ����,����Ŀ�����ɭ������ö���,������
����ǰ�����Ƿ���ɽ,��˵ɽ����һЩɱ�˲�գ�۵�ɽ��,û�¾�����ɽ��������,��Ȼ���
�ľ����⸽���İ�����. ����,����û��·������ȥ����ɽ,�ܲ����������İ�!�����ֲ���
�ڹ�...... ��ʱ���㷢���Աߵ���ʯ����ֵֹ�Ү����   �š���


LONG);

  set("objects", ([ /* sizeof() == 1 */
]));

  set("outdoors", "/open/ping");

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"m12",
]));

  setup();
}
void init()
{
      add_action("do_search","search");
      add_action("do_push","push");
}
int do_search(string str)
{
      if(str!="stone")
          write(
          "�㷢������и���ʯͷ(stone),�������ƺ����˰ᶯ�� !\n");
      else
          write(
          "�� ��   ���ҵ�����Ӧ���ƵĶ���Ŵ�ʯͷ�� ��\n");
          return 1;
}
int do_push(string str)
{
          write(
          "��Ѿ��˾�ţ����֮�������ʯͷ���ƿ�������ص��� .....\n",this_player());
          this_player()->move(__DIR__"m14");
          return 1;
}
