
// godcure.c
// 10                           ->����ҩ(health-medicine)
// 10                           ->ȥ����(flower-medicine) 
// 20                           ->������(force-medicine)
// 30                           ->�߶��Ľ�ҩ(snake-medicine)
// 30                           ->��õ�嶾�Ľ�ҩ(rose-medicine)
// 40                           ->����ҩ(outhealth-medicine)
// 50 ʮ�깣����(tree item)     ->���鵤(bilin pill)
// 50 �Ž�����(nine item)       ->��ת��(nine pill)
// 50 ̫��ɽ���(taii item)     ->̫����ڤ��(taii pill)
// 60 �������Q(seng item)       ->���Q����¶(fulin pill)
// 70 �����(human item)        ->���鵤(human pill)
// 80 �����(ground item)       ->�ƹ�����ɢ(ugeposisan)
// 90 �����(sky item)          ->����ɢ(sky pill)
//100 (��,��,������ݺ�һ)      ->δ��(Ԥ����������ǿ��)
#include <ansi.h>
inherit SKILL;
mapping make = ([
	             "force": ([
		                   1:"gold stone",
		                   2:"flower iron",
                       		   3:"green stone",
		                                    ]),
         	     "health": ([]),
	             "outhealth": ([]),
	             "rose": ([]),
	             "snake": ([]),
	             "flower": ([]),
                     "fulin":([ 1:"seng item",    ]),
                     "bilin":([ 1:"tree item",    ]),
                     "nine":([ 1:"nine item",    ]),
                     "taii":([ 1:"taii item",    ]),
                     "sky":([ 1:"sky item",     ]),
                     "ugeposisan":([ 1:"ground item",  ]),
                     "human":([ 1:"human item",   ]),
                     "dragon":([ 1:"sky item",
                                1:"ground item",
                                2:"human item",   ])
               ]);

mapping make_improve = ([
                              "force" : 1,
                              "health": 1,
                              "outhealth": 1,
                              "rose"  : 1,
                              "snake" : 1,
                              "flower": 1,
                              "fulin" : 2,
                              "bilin" : 1,
                              "nine"  : 1,
                              "taii"  : 1,
                              "sky"   : 2,
                              "ugeposisan": 2,
                              "human" : 2,
                              "dragon"  : 2.5,
                         ]);

mapping make_name = ([
                              "force": "������",
	                      "health": "����ҩ",
         	              "outhealth": "����ҩ",
	                      "rose": "��õ�嶾�Ľ�ҩ",
	                      "snake": "�߶��Ľ�ҩ",
	                      "flower": "ȥ����",
                              "fulin":"�˲�����¶",
                              "bilin":"���鵤",
                              "nine":"��ת��",
                              "taii":"̫����ڤ��",
                              "sky":"���鵤",
                              "ugeposisan":"�ƹ�����ɢ",
                              "human":"���鵤",
                              "dragon":"����������",
                    ]);
mapping make_need_lv = ([
                              "force" : 20,
                              "health": 10,
                              "outhealth": 40,
                              "rose"  : 30,
                              "snake" : 30,
                              "flower": 10,                              
                              "bilin" : 50,
                              "nine"  : 50,
                              "taii"  : 50,
                              "fulin" : 60,
                              "human" : 70,
                              "ugeposisan": 80,
                              "sky"   : 90,
                              "dragon": 100,
                    ]);

int valid_enable(string usage)            {
        return (usage=="cure");
        }
int valid_learn(object me)                {
        return 1;
        }
int practice_skill(object me)             {
        return notify_fail("����ҽ��ֻ����ѧ�ġ�\n");
        }
int make(object me,string name)
{
        object medicine;
        int i;
        mapping dict;
        string pstr="";
        if(!make[name])
                return notify_fail("����ҽ����û������ҩҮ��\n");
        if(me->query_skill("godcure",1)<make_need_lv[name])
                return  notify_fail("��Ļ���ҽ���̶Ȳ������޷���������ҩ��\n");
        dict=make[name];
        for(i=0;i<sizeof(dict);i++)
        {
              if(!present(dict[i],me))
                return notify_fail("������ϲ��㣬�޷����ơ�\n");
              medicine=present(dict[i],me);
              pstr+="("+medicine->name()+")";
        }
        message_vision(
        "$N��"+pstr+"����"+make_name[name]+"��\n",me);
        for(i=0;i<sizeof(dict);i++)
                destruct(present(dict[i],me));
        for(i=0;i<5;i++)
        {
                medicine = new("obj/medicine/"+name+"_medicine");
                medicine->set("medicine_power",me->query_skill("cure")/10);
                medicine->move(me);
        }
  if(me->query_skill("godcure",1) < 100)
  {
    i = me->query("int")/3
        + make_improve[name]*(me->query_skill("cure",1)/20);
    me->improve_skill("godcure",random(i));
  }
   return 1;
}
string perform_action_file(string action) {
        return CLASS_D("doctor")+"/godcure/"+action;
        }


