

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('hospital', '0013_patient_profile_pic'),
    ]

    operations = [
        migrations.AlterField(
            model_name='patientdischargedetails',
            name='mobile',
            field=models.CharField(max_length=10, null=True),
        ),
    ]
