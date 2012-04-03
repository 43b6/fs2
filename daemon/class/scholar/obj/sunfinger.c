// made by onion
#include <ansi.h>
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("һ����ָ",({"sunforce finger","finger"}) );
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","�Դ����ڼ��\�����ɵ���ָ, ������ɫ����ʶ�����Ĵ�С
��������(addin)����μҵ�������Ʈ���ȡ��У�����ս������Ϊ��ʤ��������\n");
        set("unit","��");
        set("value", 0);
        set("material","force");
        set("no_drop",1);
 //       set("wield_msg","$N��$n����ָ��˼���, �û���һ����â��\n");
        set("unwield_msg","$N��$n������ָ��, һ���â������ָ�⡣\n");
        }
        init_stabber(1);
        setup();
}
void init()
{
        add_action("do_wield","wield");
//ָ��򻯵Ľ�������ҵ�actionҪ�ض�
        add_action("do_wield","wi");
        add_action("do_wield","wie");
        add_action("do_wield","wiel");
        add_action("do_vanish","vanish");
        add_action("do_sp","addin");    //�������ܣ������Կ���������Ʈ����
}
int do_wield(string arg)
{
        object me=this_player();
        object ob=this_object();

        if(!arg) return 1;
        if(arg!="all" && arg!="finger" && arg!="sunforce finger")
                return 1;

        if(me->query("family/family_name")!="�μ�")
        {
        message_vision("$N�����������˹�, ��$n���������$N������ʧ���١�\n",me,ob);
        destruct(ob);
        }
        else
        {
        ::wield();
        message_vision("$N��$n����ָ��˼���, �û���һ����â��\n",me,ob);
        }
        return 1;
}

int do_vanish(string str)
{
        object me=this_player();
        object ob=this_object();
        message_vision("$N�����������˹�, ��$n���������$N������ʧ���١�\n",me,ob);
        me->add("force",1);
        destruct(ob);
        return 1;
}
int do_sp(string str)
{
        object me=this_player();
        object ob=this_object();
        int fun;

        if(!me->query("marks/fan-finger"))
                return 0;

        if(!str || str!="fan")
                return notify_fail(HIC"��Ҫ��һ��ָ������������ȥ��??\n"NOR);

        if(!present("finger fan",me))
                return notify_fail(HIC"�������û��Ʈ���ȣ�����ô������ȥҲû��!!\n"NOR);

        if(me->is_fighting())
                return notify_fail(HIG"ս�������޷���һ��ָ������������!!\n"NOR);

        fun=me->query("functions/fan-finger/level");
        switch(fun){
          case 0..10:
            fun=10;
            break;
          case 11..20:
            fun=20;
            break;
          case 21..30:
            fun=30;
            break;
          case 31..40:
            fun=40;
            break;
          case 41..50:
            fun=50;
            break;
          case 51..60:
            fun=60;
            break;
          case 61..70:
            fun=70;
            break;
          case 71..80:
            fun=80;
            break;
          case 81..90:
            fun=90;
            break;
          case 91..100:
            fun=100;
            break;
          case 101..110:
            fun=110;
            break;
          case 111..120:
            fun=120;
            break;
        }
        if(me->query_temp("fan-finger") >= fun)
          return notify_fail(HIM"��һ��ֻ��������"+CHINESE_D->chinese_number(fun)+"��һ��ָ������Ʈ�����С�\n"NOR);

        if(query("equipped"))
                return notify_fail(HIY"��������װ����һ��ָ���������޷�����������\n"NOR);

        message_vision(HIC"
$N"HIC"�������������ϣ����ϵ���ɫ�ɺ�ת�ף����ɰ�ת�죬ȫ�����б���
$N"HIC"��Ȼ���۷ž��⣬��ָ�ܳ�һ��ָ��������Ʈ������!!!\n

"HIR"$N"HIR"��Ϊ�þ����ȣ���ʱ�޷��ж���\n"NOR,me);

        me->start_busy(2);
        me->add_temp("fan-finger",fun/10);
        me->add("force",-100);
        me->set_temp("block_msg/all",1);
        call_out("delay",3,ob,me);
        return 1;
}
int delay(object ob,object me)
{
        me->set_temp("block_msg/all",0);
        destruct(ob);
        return 1;
}
