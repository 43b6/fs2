#include <ansi.h>
inherit F_CLEAN_UP;
int exert(object me,object target)
{
   int ski_lv;
   if (me->query("quests/evilup")!=1)
      return notify_fail("���ڸ��� ?\n");
   if (me->query("bellicosity")>=4000)
      return notify_fail("��ɱ���˻�Ҫ����?\n");
   if (me->query_skill("badforce",1)<30)
      return notify_fail("����δ��Ⱦ��ħ����а���� ,�ٶ����ϰ��\n");
   if (me->query("class") != "bandit")
      return notify_fail("���ְҵ�޷�ʹ������ɱ���ľ���\n");
   if (me->query("force")<100)
      return notify_fail("������ ?û�������� ?\n");
   ski_lv=me->query_skill("badforce",1)*10;
          me->add("bellicosity",random(ski_lv)+1);
          me->add("force",-50);
          message_vision(
"[1;33m$N���ö�ħ����������а���� ,���������Լ���ɱ�⡣[0m\n[35m���һ�ɺ�����$N��ͷ��ð�� ,$N����ɱ�����ڡ�[0m\n",me);
          return 1;

}
      
