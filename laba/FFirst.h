#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für FFirst
	/// </summary>
	public ref class FFirst : public System::Windows::Forms::Form
	{
	public:
		FFirst(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~FFirst()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelHello;
	protected:

	protected:


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelHello = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelHello
			// 
			this->labelHello->AutoSize = true;
			this->labelHello->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelHello->Location = System::Drawing::Point(60, 45);
			this->labelHello->Name = L"labelHello";
			this->labelHello->Size = System::Drawing::Size(154, 20);
			this->labelHello->TabIndex = 0;
			this->labelHello->Text = L"Çäðàâñòâóé Ìèð!";
			this->labelHello->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// FFirst
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 111);
			this->Controls->Add(this->labelHello);
			this->Name = L"FFirst";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ìîÿ ïåðâàÿ ïðîãðàììà";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
