// c_doc.c ���������ļ� by ACKY

void doc_edit( string str )
{
	write_file( "/doc/help/clan/"+this_player()->query("clan/name"), str, 1 );
	return;
}

int main( object me )
{
	if( !me->query("clan" ) || me->query("clan/rank") > 1 )
		return 0;
	me->edit( (: doc_edit :) );
	return 1;
}


int help( object me )
{
	write( "
	c_doc: ������д�����ļ���

	�����ļ����д���, ������ʷ, �����ϡ�

	��� help <������������> ������\�������ļ���

                                                         by ACKY 08/17/00
");
        return 1;
}
