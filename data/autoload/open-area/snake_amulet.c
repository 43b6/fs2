inherit ITEM;
#include <ansi.h>

void create()
{
        set_name(HIG"���߻���"NOR,({"snake amulet","amulet","snake-amulet"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else
        {
                set("long","
����Ļ���������կ����կ֮���������ɾ�������
Я����ϡ���䱦���˷���������ʹ���ߵĲ�ͬ����
�в�ͬ�Ĺ�Ч�����Ŵ��������а����ĳλа��
���������ɵġ�
[ʹ�÷��� : pray amulet ,divest amulet ]
\n");

        set("light_up",-1);
        set("value",100000);
        set("unit","��");
        set("no_put",1);
        set("no_drop",1);
//      set("no_get",1);
        set("no_sell",1);
        set("no_auc",1);
        set("no_give",1);
        set("no_steal",1);
        }

        setup();
}

void init()
{
        object me,ob;
        me=this_player();
        ob=this_object();

        add_action("do_pray","pray");
        add_action("do_divest","divest");
        if( !ob->query("boss") )
        {
        ob->set("boss",me->query("id"));
        }
}

int do_pray(string arg)
{
object ob,me;

        me = this_player();
        ob = this_object();

        if( !arg )
                return 0;

        arg=lower_case(arg);
        if( !ob = present(arg,me) )
                return 0;
        if( ob != this_object() )
                return 0;

        if( me->query_temp("snake/pray_snake_amulet") )
                        return notify_fail("���Ѿ���ʹ��"+ob->name(1)+"��\n");


        (int)me->add_temp("apply/force",5);
        if( me->query("class") == "swordsman" ) (int)me->add_temp("apply/sword",10);
        if( me->query("class") == "blademan" ) (int)me->add_temp("apply/blade",10);
        if( me->query("class") == "marksman" ) (int)me->add_temp("apply/archery",10);
        if( me->query("class") == "dancer" ) (int)me->add_temp("apply/magic",10);
        if( me->query("class") == "prayer" || me->query("class") == "fighter" || me->query("class") == "bandit" ) 
                (int)me->add_temp("apply/unarmed",10);
        if( me->query("class") == "killer" )
                (int)me->add_temp("apply/dagger",10);
        if( me->query("class") == "scholar" || me->query("class") == "doctor")
                (int)me->add_temp("apply/stabber",10);

        message_vision(HIY"$N����$n"+HIY+"��ʼ��...$n"+HIY+"����ǿ�ҵĹ�â��\n"NOR,me,ob);
        ob->set("name",HIW"( ��˸ )"NOR+HIG"���߻���"NOR);
        me->set_temp("snake/pray_snake_amulet",1);
return 1;
}

int do_divest(string arg)
{
object ob,me;

        me = this_player();
        ob = this_object();

        if( !arg )
                return 0;

        arg=lower_case(arg);
        if( !ob = present(arg,me) )
                return 0;
        if( ob != this_object() )
                return 0;

        if( !me->query_temp("snake/pray_snake_amulet") )
                        return notify_fail("�㲢û��ʹ��"+ob->name(1)+"��\n");
        (int)me->add_temp("apply/force",-5);
        if( me->query("class") == "swordsman" ) (int)me->add_temp("apply/sword",-10);
        if( me->query("class") == "blademan" ) (int)me->add_temp("apply/blade",-10);
        if( me->query("class") == "marksman" ) (int)me->add_temp("apply/archery",-10);
        if( me->query("class") == "dancer" ) (int)me->add_temp("apply/magic",-10);
        if( me->query("class") == "prayer" || me->query("class") == "fighter" || me->query("class") == "bandit" ) 
                (int)me->add_temp("apply/unarmed",-10);
        if( me->query("class") == "killer" )
                (int)me->add_temp("apply/dagger",-10);
        if( me->query("class") == "scholar" || me->query("class") == "doctor")
                (int)me->add_temp("apply/stabber",-10);

        message_vision("$N�����$n��ʹ�á�\n",me,ob);
        ob->set("name",HIG"���߻���"NOR);
        me->delete_temp("snake/pray_snake_amulet",1);
return 1;
}

int query_autoload()
{
	return 1;
}
