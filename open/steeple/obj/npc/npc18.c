#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
        set_name("��֪��",({"master chen","chen"}));
        set("long",
        "���Ǳ����̲��������߹�,���ƴ�����,����ȫ��˾�����Ա���ȡ�\n"+ 
        "�йص��ٵ�һЩָ���Լ��ƶȵȵȵ�˵����(help officer).\n");
        set("gender","����");
        set("class","officer");
        set("title",HIW"����Ӱ��"NOR"����������");
        set("officer_class","����������");
        set("officer_power",150);
        set("max_officer_power",150);
        set("guild_master",1);
        set("office_exp",10000);
        set("nickname","ִ����ɽ");
        set("officer_att","good");
        set("combat_exp",7000000);
        set("attitude","heroism");
        set("age",55);
        set("str", 30);
        set("con", 30);
        set("cps", 30);
        set("max_force",70000);
        set("force",70000);
        set("max_kee",7000);
        set("kee",7000);
        set_temp("apply/armor",150);
        set_skill("literate",80);
        set_skill("force",30);
        set_skill("dodge",40);
        set_skill("parry",60);
        set_skill("unarmed",40);
        set_skill("dagger",90);
        set_skill("be-officer",120);
        set_skill("security",120);
        map_skill("be-officer","security");
        set_skill("dragon-dagger",90);
        map_skill("dagger","dragon-dagger");
        set_skill("chen-steps",60);
        map_skill("dodge","chen-steps");
        set_skill("oneforce",40);
        set_skill("chen-steps",60);
        map_skill("force","oneforce");
        map_skill("dodge","chen-steps");
        set("force_factor",10);
        setup();
        create_family("��֪��",1," ");
        carry_object("/open/capital/obj/chen_dagger")->wield();
}

void heart_beat()
{
        if( random(4) < 1 ){
        if( is_fighting() ){
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("exert heal");
        }
        }
     ::heart_beat();
}

int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"ϵͳ��ս��ֹͣ��$N�����У���\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}
void unconcious ()
{
 object me=query_temp("last_damage_from");
if(!present("fight_card",me))
{
tell_object(me,"\n\nϵͳ��������ûЯ����Ƭ�������޷���¼ս����\n");
destruct (this_object ());
}
else
if(!me->query("quest/start_game"))
{
tell_object(me,"\n\nϵͳ��������û����ʽ�Ǽǣ������޷����䡣\n");
destruct (this_object ());
}
else
if(me->query("quest/start_game")< 19)
       {
        message_vision(HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"��ʮ�˲���������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"��ʮ�Ų���������"HIG"��"HIW"��
	"NOR,me);
	me->set("quest/start_game",19);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}


