//master of cure

inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("�ȶ�ʥɮ",({"Master of bonze","master","bonze"}) );
        set("long",@LONG
        ���������η��ɣ�Ϊһλ�Ȱ���ɮ�ˣ��Ȼ���������
        ��;�ı�Ե�ˣ��ʵô�ʥɮ�ĳƺš�
LONG );
        set("gender", "����" );

        set("class","bonze");
        set("guild_master",1);

        set("combat_exp",2000000);
        set("force",3000); 
        set("max_force",3000);
        set("force_factor",10);
        set("max_kee",3000);
        set("mana",200);
        set("max_mana",200);
        set("max_atman",200);
        set("atman",200);
        set_skill("array",80);
        set_skill("blade",80);
        set_skill("sword",80);
        set_skill("cure",60);
        set_skill("force",80);
        set_skill("spells",20);
        set_skill("magic",20);
        set_skill("move",60);
        set_skill("parry",80);
        set_skill("staff",120);
        set_skill("stick",120);
        set_skill("literate",40);
        set_skill("unarmed",80);
        set_skill("dodge",60);
        set_skill("buddhism",100);
        set_skill("rulai",100);
        set_skill("fumostaff",100);
        set_skill("yu-steps",100);
        set_skill("ejinforce",100);
        map_skill("force","ejinforce");
        map_skill("unarmed","rulai");
        map_skill("dodge","yu-steps");
        map_skill("move","yu-steps");
        map_skill("staff","fumostaff");

        
        create_family("������", 42, "������");
 
        setup();
        carry_object(__DIR__"buddha_staff")->wield();
        carry_object(__DIR__"puty_pullium")->wear();

}

/*
void init()
{
        add_action("do_join","join");
}

int do_join(string str)
{
        object me;
        me = this_player();
        if(str!=0)
          return notify_fail("���\"join\"���ɡ�\n");
        if(me->query("class") == "bonze" )
        return notify_fail("�㲻Ҫ����Ц�ˣ��㲻����ͼ�������\n");
        if(me->query("gender") == "Ů��")
          return notify_fail("��λŮʩ����ذ�,�������ǲ���Ů�Եġ�\n");
        if( me->query("class") )
          return notify_fail("���Ѿ������˱�Ĺ�����\n");
        command("say �����ӷ𣡻�ӭʩ��������е����С�\n");
        me->set("class","bonze");
        return 1;
}
void attempt_apprentice(object ob)
{
        if(this_player()->query("class")!="bonze")
        {
                command("sigh");
                command("say ��δ����ţ�ˡ�����޵�,��������Ϊͽ��\n");
                return;
        }else{
        command(":)");
        command("recruit "+ob->query("id"));
        }
}
*/
