#include <ansi.h>
#include <room.h>
inherit ROOM;

void create()
{
  set ("short", "�羧��ǰ��");
  set ("long", @LONG
��������������Ŀ�����������ľ��š���ȫ��Լ��
��֮Զ������ɹ�һ��ͨ�ж��ѡ�����ȫ������֮��ķ�
�֣����迿�����ƽ��м�ǧ��׹������ͨ�С�����ǰ��
����һʯ�������ϼ�������������ļ׹����֣�����Ѷ�
�������йش��ŵ�������

LONG);

        set("exits", ([ /* sizeof() == 1 */
  "north" : __FILE__,
  "south" : __DIR__"room0",

]));
set("no_transmit", 1);
        set("objects", ([
]));
        setup();
}
void init()
{
        object me=this_player();
        string nowtime,nowmin,nowhour,nowday,rightway;
        int min,hour,day,trueroad;

        nowtime=ctime(time());
        nowmin=nowtime[14..15];
        nowhour=nowtime[11..12];
        nowday=nowtime[8..9];
        if(sscanf(nowmin,"%d",min))
                min=min;
        if(sscanf(nowhour,"%d",hour))
                hour=hour;
        if(sscanf(nowday,"%d",day))
                day=day;
        switch(hour%3)
        {
                case 0:
                        trueroad=1;
                        break;
                case 1:
                        trueroad=2;
                        break;
                case 2:
                        trueroad=3;
                        break;
                default:
                        write("����bug��!!\n");
                        break;
        }
        if(wizardp(me))
        {
        printf(HIY"����ʱ�� "+ctime(time())+"\n"NOR);
        printf(HIY"��Ϊ%d��\n"NOR,min);
        printf(HIY"ʱ��Ϊ%d��\n"NOR,hour);
        printf(HIY"����Ϊ%d��\n"NOR,day);
        printf("trueroad=%d\n",trueroad);
        }
        switch(trueroad)
        {
                case 1:
                        if(min==15)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room2");
                                rightway="north";
                        }
                        if(min>=0 && min<=20 && min!=15)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room2");
                                set("exits/northwest",__DIR__"room3");
                                set("exits/northeast",__DIR__"room4");
                                rightway="north";
                        }
                        if(min>=21 && min<=40)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room4");
                                set("exits/northwest",__DIR__"room2");
                                set("exits/northeast",__DIR__"room3");
                                rightway="northwest";
                        }
                        if(min>=41 && min<=59)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room3");
                                set("exits/northwest",__DIR__"room4");
                                set("exits/northeast",__DIR__"room2");
                                rightway="northeast";
                        }
                        break;
                case 2:
                        if(min==35)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room2");
                                rightway="north";
                        }
                        if(min>=0 && min<=20)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room4");
                                set("exits/northwest",__DIR__"room2");
                                set("exits/northeast",__DIR__"room3");
                                rightway="northwest";
                        }
                        if(min>=21 && min<=40 && min!=35)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room3");
                                set("exits/northwest",__DIR__"room4");
                                set("exits/northeast",__DIR__"room2");
                                rightway="northeast";
                        }
                        if(min>=41 && min<=59)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room2");
                                set("exits/northwest",__DIR__"room3");
                                set("exits/northeast",__DIR__"room4");
                                rightway="north";
                        }
                        break;
                case 3:
                        if(min==55)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room2");
                                rightway="north";
                        }
                        if(min>=0 && min<=20)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room3");
                                set("exits/northwest",__DIR__"room4");
                                set("exits/northeast",__DIR__"room2");
                                rightway="northeast";
                        }
                        if(min>=21 && min<=40)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room2");
                                set("exits/northwest",__DIR__"room3");
                                set("exits/northeast",__DIR__"room4");
                                rightway="north";
                        }
                        if(min>=41 && min<=59 && min!=55)
                        {
                                delete("exits");
                                set("exits/south",__DIR__"room0");
                                set("exits/north",__DIR__"room4");
                                set("exits/northwest",__DIR__"room2");
                                set("exits/northeast",__DIR__"room3");
                                rightway="northwest";
                        }
                        break;
        }
        if(wizardp(me))
                printf("��ȷ��·Ϊ%s\n",rightway);
//add by bss,�����������,���Խ���Ŀ����÷ɵ�
    if(me->query("marks/fan-finger"))
      tell_object(me,HIM"���������Ṧ����������, �ƺ����Էɶ�(fly)����!!\n"NOR);
      add_action("do_fly","fly");
}
int do_fly()
{
    object me=this_player();
    int i;
     
    message_vision(HIY"$Nʹ�������Ṧ, ����һ��, ���԰���ȥ!!!\n"NOR,me);
    if(me->query("marks/fan-finger")){
      me->move("/open/ping/questsfan/qroom/room5");
      message_vision(HIC"$N�ڿ��з��������, ��������ڵ���!!\n"NOR,me);
    }
    else{
      message_vision(HIR"$N�ڿ��к�Ȼ�е���������, һ��������, ����ˤȥ!!\n"NOR,me);
      if(sizeof(this_object()->query("exits")) > 2) i=random(50);
      else i=2;
      switch(i){
        case 0..5:
          me->move("/open/ping/questsfan/qroom/room2");
          tell_object(me,HIM"����һ��, �����������, ���Ǻ���!!\n"NOR);
          break;
        default:
          me->move("/open/ping/questsfan/qroom/room3");
          tell_object(me,HIG"�ۿ����Ҫ����������, �������Ȼ����, �Ǹ��ž�Ȼ�ǻ�Ӱ!!\n"NOR);
          break;
      }
    }
    return 1;
}

