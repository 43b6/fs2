#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"����ռ���ʷ��չ��"NOR);
        set( "long", "�����ҽ��������ܹܵ�ְ��,������FS���ܹ��Ĳ���,ͬʱȷ����FS��
һЩ���룺
1.�����µ���ʦ�ƶ�,ϣ�����Ծ�����ֹ���ײ������¼�
2.���ֳ����ɵ���ɫ�ƶ�
3.��չ���ɵ��ƶ�
ͬʱ����ʦ,��ЩFS����ʦ����ʮ����˲�䵽��ֻ�в�����ʮ�ˡ�
��ʱFS��ϵͳ��Crack,ʹFs��lib����,�������Anmyǿ��FS����վ��
��ȫ��.........
����Ϊ�������������һЩ�ش�ĸ�
1.����MAX_KEE��EXP���㷨
2.ǿ��HELPʹ������������
3.�ų���FSLIB,����Ӧ��Ҳ�REOPEN
�����ر��лsmalltwo��libraa��λ���,smalltwo�����p-mmx-233������
�弰CPU,libraa�����RAM,��FS��Ӳ����˵�кܴ�İ���,ҲʹFS������һ��
¥������,�ڴ��ر��л
" );
  set("exits", ([
  "north" : __DIR__"newhand6-15",
  "south" : __DIR__"newhand6-17",
               ]));
  set("light_up", 1);
  setup();
}

