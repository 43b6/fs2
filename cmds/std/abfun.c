// abandon.c
inherit F_CLEAN_UP;
int main(object me, string arg)
{
        int flv,fld;
        flv=me->query("functions/"+arg+"/level");
        fld=me->query("functions/"+arg+"/learned");
	if( !arg ) return notify_fail("��Ҫ������һ���ع���\n");

        if (!me->query("functions/"+arg+"/") )
	return notify_fail("�㲢û�������ع���\n");
        me->delete("functions/"+arg+"/level",flv);
        me->delete("functions/"+arg+"/learned",fld);
        me->delete("functions/"+arg+"/");
	write("���������" + to_chinese(arg) + "�����ع���\n");
	return 1;
}

int help()
{
	write(@TEXT
ָ���ʽ��abandon <��������>

����һ������ѧ�ļ��ܣ�ע��������˵�ġ���������ָ������ܴ��������������
ɾ����������Ժ�Ҫ������Ͱ�Ī������.

���ָ��ʹ�õĳ���ͨ��������ɾ��һЩ����С�ġ��������ļ��ܣ��������Ǽ�����
��������ʱ������������ĸ��ֶ�����ս����ѧϰ�������Щ���ܻ���Ϊ�㾭����ʹ
�ö���������ļ����б��У��������ͱ��뻨��һЩ����ȥ����ס����ѧ����һ��
��Ȼ�����˵����ʸ��в�ͬ�����Ըߵ����ܹ�ѧϰ���༼�ܶ���Ϊ��Ŷ��յĲ��ӣ�
���Խϲ���˾�ֻ��ר�����ض�����ܣ������ѧ�ļ�������̫�࣬�����������
����ᷢ�������ѧϰ�ٶȽ���ֻѧ���ּ��ܵ�����������Խ�࣬ѧϰЧ���������
��Խ���أ��������ξ�����һ��ѧ��ͬʱѡ��̫��ѧ�֣���Ȼ����Ȼ����ƾ�ų��˵�
��־������ȥ�������⽫��໨�������౦���ʱ�䡣

  ע��: ���һ��������ĳ���, ���޷���ѧ����.
TEXT
	);
	return 1;
}