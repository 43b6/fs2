#include <ansi.h>
string ask_me(object who);
string do_mention(object who);
inherit NPC;
int j=0 ,k=1;
void create()
{
        set_name("���Ӹ�", ({ "yen jifu","yen","jifu"}) );
        set("gender", "����" );
        set("age",79);
        set("str",30);
        set("cps",30);
        set("cor",30);
        set("per",30);
        set("int",30);
        set("spi",30);
        set("con",30);
        set("kar",30);
        set("long",
                "����֣ʿ����ʦ�� ,Ϊ�˳�����Ѱ������ң�� ,��������֮λ
�ø���֣ʿ�� ,�����Ľ����������˿�֪ ,���϶��������Ĵ�
���ľ������� ,������ɲ�.���������޾���� . \n");
        set("force",3000);
        set("max_kee",3000);
        set("sen",7000);
        set("max_sen",7000);
        set("kee",3000);
        set("max_gin",7000);
        set("gin",7000);
        set("no_kill", 1);
        set("no_fight", 1);
        set_skill("literate",90);
        set_skill("shasword",100);
        set_skill("shaforce",100);
        set_skill("sha-array",140);
        map_skill("array","sha-array");
        set_skill("sha-steps",130);
        set("max_force",3000);
        set_skill("array",120);
        set_skill("move",150);
        set_skill("force",100);
        set_skill("dodge",100);
        set_skill("parry",90);
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        set_skill("sword",120);
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        set_skill("unarmed",200);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        set("force_factor",5);
        set("chat_chance_combat",70);
        set("chat_chance",10);
 
        set("inquiry", ([
                "֣ʿ��": "������ʦ�� ,�����˵ʹ�ɽ��ɱ���൱ǿʢ .\n",
                "��ң��" : "�������� ,����ǰ��ڤ������һս���ʧȥ����Ӱ ,�ɽ�
            ���þ����κη�ʽ ,ʼ���޷��ҵ������˼�",
                "����": (: ask_me :),
                "�������": "����ʦ��Զ��ħ��ǰ������֮�� ,�޷��������� ,���Ǻ���(����)һ��",
                "�޾����" : "ʦ������ǰ�Ҵ�Ӧ�������˼� ..�����׶��� ..",
        ]) );
        
        set("combat_exp", 1200000);
        set("attitude", "heroism");
        set("title","����");
        setup();
        add_money("gold",40);
        carry_object("/open/gsword/obj/woodsword")->wield();

}

string ask_me(object who)
{
        set_name("���Ӹ�" , ({"yen jifu","jifu","yen"}));
    set("title", "�ɽ��ɵ���������");
        set("max_kee",7900);
        set("eff_kee",7900);
        set("kee",7900);
        set("no_kill", 0);
        set("have_ask_me",1);
        set("family/family_name","�ɽ���");
        set("dragon-sword",1);
        set("nickname", HIW"��������"NOR);  
        set("long",
                "����֣ʿ����ʦ�� ,Ϊ�˳�����Ѱ������ң�� ,��������֮λ
�ø���֣ʿ�� ,�����Ľ����������˿�֪ ,���϶��������Ĵ�
���ľ������� ,������ɲ�.����������������. \n");
        set("chat_chance_combat", 75),
        set("chat_msg_combat", ({
                (: this_object(), "special_att2" :),
                (: this_object(), "special_att" :),
                (: this_object(), "special_att3" :),
                "���Ӹ�ȫ��ɢ����һ�����˵����� !\n",
          
                               })); 
        kill_ob(this_player());
        if(!present("blood-river sword")){ 
        message("vision",
                HIM " \n"              
                "���Ӹ������ĳ�����������佣 ..һ��Ѫ�콣��ľ����ý� .\n\n"
                ,environment(), this_object() );
        set("attitude","aggressive");
        set("bellicosity", 1000);
        set("pursuer", 1);
        set("force_factor", 12);
        set("force", 4700);
        set("max_force", 4700);
        set("combat_exp", 2500000);
        set("revealed", 1);
       message("vision","���Ӹ����ֳ���һָ ..��������ԼԼ��Ʈ����һ������...\n\n"
           HIW"�����ɢȥ���������ж���һ��"+HIR"Ѫ��"NOR+"\n\n\n",
        environment(), this_object());
        command("unwield sword");
        carry_object("/open/island/eqs/sword1.c")->wield();
        return HIY"��"HIR"Ѫ��"HIY"���� ,������Ѫ���� ,С�������� !\n"NOR;
                                           }        
 }
int special_att()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR "
        ���Ӹ���Х�� : �����ɽ�֮���� !������ !
        \n" NOR ,one);
        message_vision( " 
        ���Ӹ�ƽ�ٽ��ȵ� :\n\n"+HIR"                      "HIC"��"+HIR"--"+HIW"ϼ"+HIR"--"+HIC"��"+HIR"--"+HIW"��"+HIR"--"+HIC"��"+HIR" "NOR+"\n\n",one);
        message_vision(HIB"
        �����纣�˰�ķɹ��� !\n"NOR,one);
        message_vision(HIM"
        $Nȫ���Ѫ�ܶ������������� !\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",50+random(70));
         COMBAT_D->report_status(one);
        return 1;
}
int special_att2()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR "
        ���Ӹ������� : �ɽ�֮���� !!
        \n" NOR ,one);
        message_vision( "
        ���Ӹ�б�ٽ��ȵ� :\n\n"+HIR"                         ***"+HIW"��"+HIR"**"+HIW"��"+HIR"**"+HIW"��"+HIR"**"+HIW"��"+HIR"**"+HIW"��"+HIR"*** "NOR+"\n",one);
        message_vision(HIR"
        ��ֻ������ǰһƬ��׽���֮�� !\n"NOR,one);
        message_vision(RED"
        $Nȫ�����²��������������޿е��˵Ĵ�С���ȵ��˿� !\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",60+random(70));
         COMBAT_D->report_status(one);
        return 1;
}
int special_att3()
{
        object *me,one;
        int i;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        message_vision( HIB"
        ���Ӹ�ŭ��� : �ɽ�֮���Ͻ��� !������ !
        \n\n" NOR,one);
        message_vision(HIW"
        ���Ӹ�Ѹ�ٵ�����һ�� !ֻ��һ���׹�ӽ������� !\n\n\n\n"
        "�㿴�������ǰ���׳�������ô���� !\n"NOR
        ,one);
        message_vision(HIR"һ������Ȫ���Ѫ$N���ϲ�ͣ����� !!\n\n"NOR
                       HIY"�Ǹ��ٶȼ���Ķ�����Ȼ��ͣ���Ը�������ҧ$N������!!\n"NOR
                       "һ���ٶȼ����"+HIW" ���� "NOR+"��$N��߲��ϵķ����� !! 
˲��㽫������$N�����Ĳ�����!!
        \n"NOR,one);
        one->receive_wound("kee",40+random(50));
        one->apply_condition("bleeding",10);
        one->start_busy(1);
        COMBAT_D->report_status(one);
        return 1;
}
 void die()                                                                 
 {
    object winner = query_temp("last_damage_from");        
    if(query("have_ask_me")==1)
 {
    new("/open/island/obj/bon.c")->move(environment(winner));   
    tell_object(winner,HIB"\n\n���Ӹ��Ļ��й����һ������\n\n\n"NOR); 
           
  }                   
    ::die();                                                           
  }          











