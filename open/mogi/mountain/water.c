// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","��Ȫ��");
        set ("long","
  ���������Ȫ���ˣ�ħ���ΨһˮԴ����Դ����а���ϵĻ�ѩ
�ѻ���������Ϊ�˵ص������Ը߹��ڴ��γɱ�ˮ������������
�������Ǹ��������ֵ�������ɫ����������ͦƯ���ġ�\n
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
         "west" :  __DIR__"d",
      ]));

       

        setup();
set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );
}
