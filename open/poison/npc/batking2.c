//���ֵȼ���mob��Ӧ�ô���iceger�����õ�by cyw 91/04/05
inherit NPC;
void create()
{
        set_name("ΤһЦ",({"green-bat king","king"}));
        set("gender","����");
        set("age",35);
        set("class","poisoner");
        set("str",30);
        set("long", "ӵ��һ�����˲��ҹ�ά���� ,��һ˫������С�۾� ,�����ڷ����ж�
�Ų��� ,�����ڵ�ʲô�˵����� ...\n");
        set("bellicosity", 1000);
set("max_kee",2000);
        set("kee",2000);
        set("max_force",3000);
           set("force",3000);
        set("force_factor",10);
        set("combat_exp",800000);
        set_skill("unarmed",100);
        set_skill("parry",80);
        set_skill("poison",100);
        set_skill("dodge",100);
        set_skill("lungshan",100);
        set_skill("henma-steps",100);
        set_skill("haoforce",80);
        set_skill("coldpoison",80);
        map_skill("unarmed","lungshan");
        map_skill("dodge","henma-steps");
        map_skill("move","henma-steps");
        map_skill("parry","lungshan");
        map_skill("force","haoforce");
        set("inquiry",([
           "�����" : "���ǽ��������� ,һ�����ò����ġ� ",
           "��������"   : "�����ҷ����ľ��� ,ֻ����������ʹ�ߡ�",
        ]));
        setup();
        create_family("ڤ��ħ��",3,"���̷���");
 //       carry_object("/open/ping/obj/iceger")->wield();
        add_money("gold",10);
carry_object("/obj/poison/rose_poison")->set_amount(20);
carry_object("/obj/poison/five_poison")->set_amount(20);
carry_object("/obj/poison/dark_poison")->set_amount(20);
carry_object("/obj/poison/faint_poison")->set_amount(20);


}


int accept_object(object me,object ob)
{
  if(ob->query("id")=="firer")
   {
        if(me->query("mark/melt-bone"))
      {
       command("say �������ƺ��ð� !");
       return 1;
      }
      if(me->query("class")!="poisoner")
    {
        command("kill "+me->query("id"));
        command("say �㲻��ħ��ͽ ,��ô�õĵ������ ?������!");
    }
      if(!me->query_temp("playboy"))
    {
              command("shake "+me->query("id"));
              command("say ˭��������� ?");
    }

   else {
        command("smile "+me->query("id"));
        if(me->query("gender")=="����")
        command("say Сʦ�� ,��ϲ��� !");
        if(me->query("gender")=="Ů��")
        command("say Сʦ�� ,����Ů�к��� !");
        me->set("mark/melt-bone",1);
        command("say �õĵ������ ,��ʾ�����ʸ�õ�����̲�����ѧ�� !");
        message_vision("ΤһЦ��˫��������ı��� ,һ����������͸�����,
�����߽������ȥ !\n",me);
        tell_object(me,"��е�һ������ ,�е�˵���������� !\n");
        }
  return 1;
    }
}

