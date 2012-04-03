inherit NPC;
inherit SSERVER;
#include <ansi.h>

void create()
{
        set_name("���ɾ�",({"master snake","snake"}));
        set("age",32);
        set("title",HIR"��������"NOR);
        set("nickname",HIW"��������"NOR);
        set("attitude","aggressive");
        set("gender","����");
        set("long","
��կկ�������Բб����Ƿǲ��֣�ռ����կΪ�����Ĵ�����°��
���޶�����\n");
        set("max_gin",20000);
        set("max_kee",20000);
        set("max_sen",20000);
        set("max_force",50000);
        set("force",50000);
        set("force_factor",20);
        set("combat_exp",800000);
        set_skill("whip",120);
        set_skill("snake-whiper",120);
        set_skill("parry",120);
        set_skill("dodge",120);
        set_skill("move",120);
        set_skill("black-steps",120);
        set_skill("force",200);
        set_skill("snowforce",200);
        map_skill("whip","snake-whiper");
        map_skill("parry","snake-whiper");
        map_skill("dodge","black-steps");
        map_skill("move","black-steps");
        map_skill("force","snowforce");
        setup();
        carry_object(__DIR__"obj/un_whip")->wield();
        carry_object(__DIR__"obj/helmet")->wear();
        carry_object(__DIR__"obj/snake_gem")->wear();
        carry_object(__DIR__"obj/un_cloth")->wear();
	carry_object("/open/magic-manor/obj/master_snake_head");
}

void heart_beat()
{
object ob,env,target;
int i,j,kee,eff,max;

        ob = this_object();
        env = environment(ob);
        target = offensive_target(ob);

        if( !target )
                return ::heart_beat(1);

        max = (int)ob->query("max_kee");
        eff = (int)ob->query("eff_kee");
        kee = (int)ob->query("kee");

        if( ob->query_busy() && random(100) < 80 )
        {
                message_vision(HIW+"$N���һ�����ơ�!!$N���澭�����ظ�������!!\n"NOR,ob);
                ob->delete_busy();
        }

        if( random(100) < 80 )
        {
                if( eff < max || kee < eff )
                {
                        message_vision(HIY"$N��Ѩ���ˣ������ڵ����˸��Ƴ�����ɫ�ظ�����࡫\n"NOR,ob);
                        ob->receive_curing("kee",800);
                        ob->receive_heal("kee",800);
                        COMBAT_D->report_status(ob,1);
                }
        }

        if( env == environment(target) )
        {
                i = (int)ob->query_skill("dodge");
                j = (int)target->query_skill("dodge");
                
                if( random(i) > random(j) && (int)target->query_busy() < 3 )
                {
                        message_vision(HIY"$Nʹ���Դ�����"+HIW+"�F"+HIG+"���в�"+HIW+"�F"+HIY+"��

        ���һζ����������޵Ĺ����ԣ����ϵ�β����$n�����

                $N��׼ʱ������Ȼ���űޱ���$n�ĸ�·Ѩ����ȥ��\n"NOR,ob,target);
                        target->start_busy(1);
                }

                if( random(i) > random(j) )
                {
                        message_vision(HIY"
$N���Ե�"+NOR+YEL+"��"+MAG+"а��"+WHT+"��"+CYN+"�߱�"+YEL+"��"+HIY+"֮����

                        "+HIW+"����"+HIC+"�򡡱ޡ��顡һ��"+HIW+"��"+HIY+"

�޷��û������������������Ҽл�֮�ƣ�����$n��\n"NOR,ob,target);
                        message_vision(HIY"$N���ܲ�����ֻ������ֵ�$n�Ĺ��ơ�\n"NOR,target,ob);
                        target->receive_wound("kee",800);
                        COMBAT_D->report_status(target,1);
                }
        }
set_heart_beat(1);
::heart_beat();
}

void die()
{
	object obj;
	string arg;
	object ob = this_object();
	object me = query_temp("last_damage_from");
	string name = me->query("name");

        if( me->query("family/family_name")==0 )
                arg = "��֪ƽ��";
        else
                arg = me->query("family/family_name");

//        if( !me->query("family/title") )
//               arg = arg+"ƽ��";
//        else
//                arg = arg+me->query("family/family_name");

        tell_object(users(),HIC"
���ͻȻһ�����꽻�ӡ�

        "HIG+ob->name(1)+"��ŭ���������� "HIC+arg+HIG" ����

                        а�����������˼����е�ɱ¾�ƻ���Ȼ�� "HIC+me->name(1)+HIG" ���ٻ��ˡ�\n"+NOR);
        if( !present("snake amulet",me) )
        {
	  if( random(9) == 7 )
	  {
	    if( me->query_temp("quests/magic-manor-02") == 6 )
	    {
	    me->set_temp("quests/kill-snake",1);
	    message_vision(HIY"$N������֮ǰ����һ���������$n�����ϡ�\n"NOR,ob,me);
	    log_file("open-area/get_amulet", sprintf("%s(%s) �õ����߻����� %s\n",name,me->query("id"), ctime(time()) ));
	    obj = new("/data/autoload/open-area/snake_amulet");
	    obj->move(me);
	    }else{
	    message_vision(HIY"$N������֮ǰ����һ���������$n�����ϡ�\n"NOR,ob,me);
	    log_file("open-area/get_amulet", sprintf("%s(%s) �õ����߻����� %s\n",name,me->query("id"), ctime(time()) ));
	    obj = new("/data/autoload/open-area/snake_amulet");
	    obj->move(me);
	    }
	  }else{
	    if( me->query_temp("quests/magic-manor-02") == 6 )
	    {
	    me->set_temp("quests/kill-snake",1);
	    }
	  }
        }else{
	  if( me->query_temp("quests/magic-manor-02") == 6 )
	  {
	  me->set_temp("quests/kill-snake",1);
	  }
	}
        ::die();
}
