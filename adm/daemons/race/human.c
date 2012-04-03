// human.c
// A normal human is at least 40 kg weight
// ���� ����������ĳ��ȸ����þ���ֵ����
// by chan
// ��������������..
// ������....
// �ı����ӵļ���,ʹ֮���� 
#define BASE_WEIGHT 40000

inherit F_DBASE;
int exp,exp_base,exp_add,exp_value,man_base,man_value,man_add,level,cla;

mapping *combat_action = ({
        ([      "action":               "$N��ȭ����$n��$l",
                "damage_type":  "����",
        ]),
        ([      "action":               "$N��$n��$lһץ",
                "damage_type":  "ץ��",
        ]),
        ([      "action":               "$N��$n��$l�ݺݵ�����һ��",
                "damage_type":  "����",
        ]),
        ([      "action":               "$N����ȭͷ��$n��$l��ȥ",
                "damage_type":  "����",
        ]),
        ([      "action":               "$N��׼$n��$l�����ӳ�һȭ",
                "damage_type":  "����",
        ]),
});

void create()
{
        seteuid(getuid());
        set("unit", "λ");
        set("gender", "����");
        set("can_speak", 1);
        set("attitude", "peaceful");
        set("limbs", ({
                "ͷ��", "����", "�ؿ�", "����", "���", "�Ҽ�", "���",
                "�ұ�", "����", "����", "����", "С��", "����", "����",
                "���", "�ҽ�"
        }) );
}

void setup_human(object ob)
{
        mapping my;
        my = ob->query_entire_dbase();
        exp=ob->query("combat_exp");
		cla=ob->query("class");
        level=exp;
        ob->set("default_actions", (: call_other, __FILE__, "query_action" :));
        
        if( undefinedp(my["age"]) ) my["age"] = random(30) + 15;
        if( undefinedp(my["str"]) ) my["str"] = random(21) + 10;
        if( undefinedp(my["cor"]) ) my["cor"] = random(21) + 10;
        if( undefinedp(my["int"]) ) my["int"] = random(21) + 10;
        if( undefinedp(my["spi"]) ) my["spi"] = random(21) + 10;
        if( undefinedp(my["cps"]) ) my["cps"] = random(21) + 10;
        if( undefinedp(my["per"]) ) my["per"] = random(21) + 10;
        if( undefinedp(my["con"]) ) my["con"] = random(21) + 10;
        if( undefinedp(my["kar"]) ) my["kar"] = random(21) + 10;
        switch(ob->query("combat_exp"))
        {
         case 0..1000:
              exp_base=0;
              exp_value=level*10;
              exp_add=25;
              man_base=0;
              man_value=exp_value;
              man_add=50;
         break;
         case 1001..10000:
              exp_base=400;
              exp_value=level-1000;
              exp_add=90;
              man_base=200;
              man_value=level-1000;
              man_add=180;
         break;
         case 10001..100000:
              exp_base=500;
              exp_value=level-10000;
              exp_add=900;
              man_base=250;
              man_value=level-10000;
              man_add=1800;
         break;
         case 100001..1000000:
              exp_base=600;
              exp_value=level-100000;
              exp_add=2000;
              man_base=300;
              man_value=level-100000;
              man_add=2000;
         break;
         default:
              exp_base=1050;
              exp_value=level-1000000;
              exp_add=7000;
              man_base=750;
              man_value=level-1000000;
              man_add=4000;
         break;

        }
//����ʱ�������ֵ�Ѫ(100)����,��������������������,����ҽ����Ĳ���СС��ߵ� 220����//

        if( userp(ob) || undefinedp(my["max_gin"]) ) {
                if( my["age"] <= 14 ) my["max_gin"] = 150; //�� 100 -> 150
//              else if( my["age"] <= 20 ) my["max_gin"] = 100 + (my["age"] - 14) * 20;
              else if( my["age"] <= 20 ) my["max_gin"] = 150 + (my["age"] - 14) * 40;
                else if( my["age"] <= 30 ) my["max_gin"] = 390;
                else if( my["age"] <= 60 ) my["max_gin"] = 390 - (my["age"] - 30) * 5;
                else my["max_gin"] = 120;
//              else my["max_gin"] = 70;
                if( my["max_atman"] > 0 ) my["max_gin"] += my["max_atman"] / 10;
                if(exp >0) my["max_gin"] += (man_base + (man_value/man_add));
				
        }
        if( userp(ob) || undefinedp(my["max_kee"]) ) {
                if( my["age"] <= 14 ) my["max_kee"] = 220; // �� 100 -> 220
//              else if( my["age"] <= 20 ) my["max_kee"] = 100 + (my["age"] - 14) * 20;
                else if( my["age"] <= 20 ) my["max_kee"] = 220 + (my["age"] - 14) * 40;
//              else my["max_kee"] = 220;
                else my["max_kee"] = 460; //�� 340 -> 400 
//                if( my["max_force"] > 0 ) my["max_kee"] += my["max_force"] / 4;
                if( my["max_force"] > 0 ) my["max_kee"] += my["max_force"] * 2 / 3 ;
// ��������ͼ������Ĳ���....
                if(exp >0) my["max_kee"] += (exp_base + (exp_value/exp_add));
// ����ֵ�Ĳ���.......
        }
        if( userp(ob) || undefinedp(my["max_sen"]) ) {
                if( my["age"] <= 30 ) my["max_sen"] = 150; //��100 -> 150
                else my["max_sen"] = 150 + (my["age"] - 30) * 5;
//              if( my["max_mana"] > 0 ) my["max_sen"] += my["max_mana"] / 4;
              if( my["max_mana"] > 0 ) my["max_sen"] += my["max_mana"] / 10;
              if(exp >0) my["max_sen"] += (man_base + (man_value/man_add));
        }

        ob->set_default_object(__FILE__);
        if( !ob->query_weight() ) ob->set_weight(BASE_WEIGHT + (my["str"] - 10)* 2000);
}

mapping query_action()
{
        return combat_action[random(sizeof(combat_action))];
}
