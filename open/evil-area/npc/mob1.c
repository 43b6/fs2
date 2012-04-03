inherit NPC;

void create() 
{
        set_name("�ɴ���",({"fly-bird","bird"}));
        set("long",
            "\n���Ǵ����ڻý�������֮һ��һ�ŵ�������Ϣ�ͱĳ������ˡ�\n");
        set("age",1937);
        set("str",30);
        set("cor",30);
        set("race","Ұ��");
        set("gender","����");
        set("attitude","aggressive");
        set("max_gin",6000);
        set("max_kee",6000);
        set("max_sen",6000);
        set("max_force",20000);
        set("force",20000);
        set("force_factor",20);
        set("combat_exp",800000);
        set_skill("unarmed",300);
        set_skill("dodge",300);
        set_skill("move",300);
        set_skill("parry",300);
        set_skill("force",250);
        set("limbs",({"ͷ��","β��","���","צ��"}));
        set("verbs",({"dunt","claw","poke"}));
        set_temp("apply/armor",100);
        set_temp("apply/damage",100);
        setup();
}

void die()
{
object ob,me,obj;
        ob=this_object();
        me=ob->query_temp("last_damage_from");
        me->add_temp("evil/road_kill",1);
        if(random(100) < 50 && (int)me->query_temp("evil/road_kill") > random(10)+10 )
        {
                message_vision("$N���ؿ��ͳ�һ������, $n�����ֿ�����˹�����\n",ob,me);
                tell_object(me,"��õ���һ���ɳ档\n");
                obj=new(__DIR__"obj/worm");
                obj->move(me);
                me->delete_temp("evil/road_kill");
        }
::die();
}
